// fichero 23329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23329;

Registro23329 crear_registro23329(int id) {
    Registro23329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
