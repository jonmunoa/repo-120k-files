// fichero 42977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42977;

Registro42977 crear_registro42977(int id) {
    Registro42977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
