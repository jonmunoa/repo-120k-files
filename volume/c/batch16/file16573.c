// fichero 16573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16573;

Registro16573 crear_registro16573(int id) {
    Registro16573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
