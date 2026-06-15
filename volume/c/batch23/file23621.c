// fichero 23621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23621;

Registro23621 crear_registro23621(int id) {
    Registro23621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
