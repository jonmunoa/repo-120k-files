// fichero 23661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23661;

Registro23661 crear_registro23661(int id) {
    Registro23661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
