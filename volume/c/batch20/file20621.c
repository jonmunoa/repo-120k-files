// fichero 20621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20621;

Registro20621 crear_registro20621(int id) {
    Registro20621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
