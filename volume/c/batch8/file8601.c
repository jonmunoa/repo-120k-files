// fichero 8601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8601;

Registro8601 crear_registro8601(int id) {
    Registro8601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
