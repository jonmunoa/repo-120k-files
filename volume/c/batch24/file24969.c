// fichero 24969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24969;

Registro24969 crear_registro24969(int id) {
    Registro24969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
