// fichero 23557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23557;

Registro23557 crear_registro23557(int id) {
    Registro23557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
