// fichero 929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro929;

Registro929 crear_registro929(int id) {
    Registro929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
