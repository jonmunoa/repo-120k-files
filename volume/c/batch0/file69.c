// fichero 69 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro69;

Registro69 crear_registro69(int id) {
    Registro69 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
