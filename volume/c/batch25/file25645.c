// fichero 25645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25645;

Registro25645 crear_registro25645(int id) {
    Registro25645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
