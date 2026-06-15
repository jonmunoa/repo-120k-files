// fichero 46085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46085;

Registro46085 crear_registro46085(int id) {
    Registro46085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
