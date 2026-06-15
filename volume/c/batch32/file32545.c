// fichero 32545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32545;

Registro32545 crear_registro32545(int id) {
    Registro32545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
