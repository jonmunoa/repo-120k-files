// fichero 14885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14885;

Registro14885 crear_registro14885(int id) {
    Registro14885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
