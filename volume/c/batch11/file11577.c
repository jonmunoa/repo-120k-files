// fichero 11577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11577;

Registro11577 crear_registro11577(int id) {
    Registro11577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
