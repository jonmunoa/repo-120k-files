// fichero 14517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14517;

Registro14517 crear_registro14517(int id) {
    Registro14517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
