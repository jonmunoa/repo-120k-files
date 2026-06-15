// fichero 5109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5109;

Registro5109 crear_registro5109(int id) {
    Registro5109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
