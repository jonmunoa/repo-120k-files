// fichero 27713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27713;

Registro27713 crear_registro27713(int id) {
    Registro27713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
