// fichero 23877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23877;

Registro23877 crear_registro23877(int id) {
    Registro23877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
