// fichero 21713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21713;

Registro21713 crear_registro21713(int id) {
    Registro21713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
