// fichero 42049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42049;

Registro42049 crear_registro42049(int id) {
    Registro42049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
