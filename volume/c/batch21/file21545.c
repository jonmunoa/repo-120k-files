// fichero 21545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21545;

Registro21545 crear_registro21545(int id) {
    Registro21545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
