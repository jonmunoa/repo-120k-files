// fichero 23241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23241;

Registro23241 crear_registro23241(int id) {
    Registro23241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
