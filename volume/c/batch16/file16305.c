// fichero 16305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16305;

Registro16305 crear_registro16305(int id) {
    Registro16305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
