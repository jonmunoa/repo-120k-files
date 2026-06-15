// fichero 45929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45929;

Registro45929 crear_registro45929(int id) {
    Registro45929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
