// fichero 23889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23889;

Registro23889 crear_registro23889(int id) {
    Registro23889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
