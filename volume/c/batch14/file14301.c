// fichero 14301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14301;

Registro14301 crear_registro14301(int id) {
    Registro14301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
