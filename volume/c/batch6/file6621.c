// fichero 6621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6621;

Registro6621 crear_registro6621(int id) {
    Registro6621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
