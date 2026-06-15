// fichero 16905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16905;

Registro16905 crear_registro16905(int id) {
    Registro16905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
