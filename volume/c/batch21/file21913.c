// fichero 21913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21913;

Registro21913 crear_registro21913(int id) {
    Registro21913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
