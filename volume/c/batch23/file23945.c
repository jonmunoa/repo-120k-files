// fichero 23945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23945;

Registro23945 crear_registro23945(int id) {
    Registro23945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
