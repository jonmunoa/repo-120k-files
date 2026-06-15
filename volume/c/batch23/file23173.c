// fichero 23173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23173;

Registro23173 crear_registro23173(int id) {
    Registro23173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
