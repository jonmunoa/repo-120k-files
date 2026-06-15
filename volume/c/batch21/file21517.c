// fichero 21517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21517;

Registro21517 crear_registro21517(int id) {
    Registro21517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
