// fichero 8577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8577;

Registro8577 crear_registro8577(int id) {
    Registro8577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
