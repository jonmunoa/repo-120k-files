// fichero 23865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23865;

Registro23865 crear_registro23865(int id) {
    Registro23865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
