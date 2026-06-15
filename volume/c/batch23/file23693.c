// fichero 23693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23693;

Registro23693 crear_registro23693(int id) {
    Registro23693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
