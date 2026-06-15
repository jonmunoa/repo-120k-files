// fichero 40409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40409;

Registro40409 crear_registro40409(int id) {
    Registro40409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
