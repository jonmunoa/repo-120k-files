// fichero 12349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12349;

Registro12349 crear_registro12349(int id) {
    Registro12349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
