// fichero 42193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42193;

Registro42193 crear_registro42193(int id) {
    Registro42193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
