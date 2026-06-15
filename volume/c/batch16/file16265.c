// fichero 16265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16265;

Registro16265 crear_registro16265(int id) {
    Registro16265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
