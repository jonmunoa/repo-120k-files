// fichero 25545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25545;

Registro25545 crear_registro25545(int id) {
    Registro25545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
