// fichero 17545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17545;

Registro17545 crear_registro17545(int id) {
    Registro17545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
