// fichero 7909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7909;

Registro7909 crear_registro7909(int id) {
    Registro7909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
