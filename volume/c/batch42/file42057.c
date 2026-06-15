// fichero 42057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42057;

Registro42057 crear_registro42057(int id) {
    Registro42057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
