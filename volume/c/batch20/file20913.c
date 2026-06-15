// fichero 20913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20913;

Registro20913 crear_registro20913(int id) {
    Registro20913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
