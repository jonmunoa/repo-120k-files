// fichero 5077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5077;

Registro5077 crear_registro5077(int id) {
    Registro5077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
