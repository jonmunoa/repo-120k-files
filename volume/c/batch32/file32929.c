// fichero 32929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32929;

Registro32929 crear_registro32929(int id) {
    Registro32929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
