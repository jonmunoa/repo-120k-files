// fichero 16393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16393;

Registro16393 crear_registro16393(int id) {
    Registro16393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
