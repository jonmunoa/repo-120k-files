// fichero 13829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13829;

Registro13829 crear_registro13829(int id) {
    Registro13829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
