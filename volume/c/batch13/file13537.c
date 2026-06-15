// fichero 13537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13537;

Registro13537 crear_registro13537(int id) {
    Registro13537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
