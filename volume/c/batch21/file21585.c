// fichero 21585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21585;

Registro21585 crear_registro21585(int id) {
    Registro21585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
