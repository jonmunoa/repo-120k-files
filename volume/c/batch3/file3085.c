// fichero 3085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3085;

Registro3085 crear_registro3085(int id) {
    Registro3085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
