// fichero 14853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14853;

Registro14853 crear_registro14853(int id) {
    Registro14853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
