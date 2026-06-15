// fichero 5005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5005;

Registro5005 crear_registro5005(int id) {
    Registro5005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
