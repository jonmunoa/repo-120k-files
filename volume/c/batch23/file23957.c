// fichero 23957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23957;

Registro23957 crear_registro23957(int id) {
    Registro23957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
