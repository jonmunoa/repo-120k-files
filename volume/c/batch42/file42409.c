// fichero 42409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42409;

Registro42409 crear_registro42409(int id) {
    Registro42409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
