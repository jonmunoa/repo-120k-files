// fichero 45665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45665;

Registro45665 crear_registro45665(int id) {
    Registro45665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
