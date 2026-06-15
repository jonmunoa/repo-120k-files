// fichero 8249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8249;

Registro8249 crear_registro8249(int id) {
    Registro8249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
