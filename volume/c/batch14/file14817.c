// fichero 14817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14817;

Registro14817 crear_registro14817(int id) {
    Registro14817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
