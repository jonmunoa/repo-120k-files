// fichero 23569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23569;

Registro23569 crear_registro23569(int id) {
    Registro23569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
