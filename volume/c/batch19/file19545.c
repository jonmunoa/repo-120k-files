// fichero 19545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19545;

Registro19545 crear_registro19545(int id) {
    Registro19545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
