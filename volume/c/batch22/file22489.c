// fichero 22489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22489;

Registro22489 crear_registro22489(int id) {
    Registro22489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
