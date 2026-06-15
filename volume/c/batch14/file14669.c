// fichero 14669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14669;

Registro14669 crear_registro14669(int id) {
    Registro14669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
