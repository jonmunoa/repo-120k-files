// fichero 38545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38545;

Registro38545 crear_registro38545(int id) {
    Registro38545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
