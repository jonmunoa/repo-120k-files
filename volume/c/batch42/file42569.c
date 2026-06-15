// fichero 42569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42569;

Registro42569 crear_registro42569(int id) {
    Registro42569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
