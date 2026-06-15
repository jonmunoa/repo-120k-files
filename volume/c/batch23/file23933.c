// fichero 23933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23933;

Registro23933 crear_registro23933(int id) {
    Registro23933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
