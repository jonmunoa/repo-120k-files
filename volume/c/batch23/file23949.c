// fichero 23949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23949;

Registro23949 crear_registro23949(int id) {
    Registro23949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
