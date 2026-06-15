// fichero 23733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23733;

Registro23733 crear_registro23733(int id) {
    Registro23733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
