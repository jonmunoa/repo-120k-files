// fichero 35577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35577;

Registro35577 crear_registro35577(int id) {
    Registro35577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
