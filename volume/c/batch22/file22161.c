// fichero 22161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22161;

Registro22161 crear_registro22161(int id) {
    Registro22161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
