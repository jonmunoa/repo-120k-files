// fichero 14625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14625;

Registro14625 crear_registro14625(int id) {
    Registro14625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
