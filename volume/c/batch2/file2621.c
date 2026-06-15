// fichero 2621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2621;

Registro2621 crear_registro2621(int id) {
    Registro2621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
