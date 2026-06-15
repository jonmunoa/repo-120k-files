// fichero 40385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40385;

Registro40385 crear_registro40385(int id) {
    Registro40385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
