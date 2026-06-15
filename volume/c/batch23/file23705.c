// fichero 23705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23705;

Registro23705 crear_registro23705(int id) {
    Registro23705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
