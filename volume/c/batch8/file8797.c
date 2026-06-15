// fichero 8797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8797;

Registro8797 crear_registro8797(int id) {
    Registro8797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
