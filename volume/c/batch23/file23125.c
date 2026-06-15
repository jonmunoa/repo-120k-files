// fichero 23125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23125;

Registro23125 crear_registro23125(int id) {
    Registro23125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
