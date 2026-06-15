// fichero 23961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23961;

Registro23961 crear_registro23961(int id) {
    Registro23961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
