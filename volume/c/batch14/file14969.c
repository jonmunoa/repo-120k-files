// fichero 14969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14969;

Registro14969 crear_registro14969(int id) {
    Registro14969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
