// fichero 14057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14057;

Registro14057 crear_registro14057(int id) {
    Registro14057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
