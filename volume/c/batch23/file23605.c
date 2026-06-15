// fichero 23605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23605;

Registro23605 crear_registro23605(int id) {
    Registro23605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
