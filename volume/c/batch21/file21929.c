// fichero 21929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21929;

Registro21929 crear_registro21929(int id) {
    Registro21929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
