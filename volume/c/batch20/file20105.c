// fichero 20105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20105;

Registro20105 crear_registro20105(int id) {
    Registro20105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
