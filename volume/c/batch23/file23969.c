// fichero 23969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23969;

Registro23969 crear_registro23969(int id) {
    Registro23969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
