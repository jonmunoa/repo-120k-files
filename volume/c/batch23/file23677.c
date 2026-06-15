// fichero 23677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23677;

Registro23677 crear_registro23677(int id) {
    Registro23677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
