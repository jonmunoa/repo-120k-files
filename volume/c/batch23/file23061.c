// fichero 23061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23061;

Registro23061 crear_registro23061(int id) {
    Registro23061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
