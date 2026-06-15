// fichero 7853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7853;

Registro7853 crear_registro7853(int id) {
    Registro7853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
