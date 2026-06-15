// fichero 21209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21209;

Registro21209 crear_registro21209(int id) {
    Registro21209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
