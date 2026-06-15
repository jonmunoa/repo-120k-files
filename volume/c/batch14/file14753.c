// fichero 14753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14753;

Registro14753 crear_registro14753(int id) {
    Registro14753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
