// fichero 7917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7917;

Registro7917 crear_registro7917(int id) {
    Registro7917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
