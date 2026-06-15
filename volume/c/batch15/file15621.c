// fichero 15621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15621;

Registro15621 crear_registro15621(int id) {
    Registro15621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
