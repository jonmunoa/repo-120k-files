// fichero 16301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16301;

Registro16301 crear_registro16301(int id) {
    Registro16301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
