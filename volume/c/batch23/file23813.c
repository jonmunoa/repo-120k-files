// fichero 23813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23813;

Registro23813 crear_registro23813(int id) {
    Registro23813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
