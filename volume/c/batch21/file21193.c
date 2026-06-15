// fichero 21193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21193;

Registro21193 crear_registro21193(int id) {
    Registro21193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
