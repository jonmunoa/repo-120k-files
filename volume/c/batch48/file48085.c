// fichero 48085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48085;

Registro48085 crear_registro48085(int id) {
    Registro48085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
