// fichero 23973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23973;

Registro23973 crear_registro23973(int id) {
    Registro23973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
