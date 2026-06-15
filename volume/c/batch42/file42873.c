// fichero 42873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42873;

Registro42873 crear_registro42873(int id) {
    Registro42873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
