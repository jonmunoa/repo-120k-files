// fichero 14713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14713;

Registro14713 crear_registro14713(int id) {
    Registro14713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
