// fichero 13193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13193;

Registro13193 crear_registro13193(int id) {
    Registro13193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
