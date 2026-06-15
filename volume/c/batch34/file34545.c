// fichero 34545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34545;

Registro34545 crear_registro34545(int id) {
    Registro34545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
