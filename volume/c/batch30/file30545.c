// fichero 30545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30545;

Registro30545 crear_registro30545(int id) {
    Registro30545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
