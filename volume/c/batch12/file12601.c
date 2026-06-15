// fichero 12601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12601;

Registro12601 crear_registro12601(int id) {
    Registro12601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
