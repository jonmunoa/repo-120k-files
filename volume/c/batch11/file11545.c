// fichero 11545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11545;

Registro11545 crear_registro11545(int id) {
    Registro11545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
