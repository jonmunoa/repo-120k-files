// fichero 42997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42997;

Registro42997 crear_registro42997(int id) {
    Registro42997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
