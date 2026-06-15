// fichero 14037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14037;

Registro14037 crear_registro14037(int id) {
    Registro14037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
