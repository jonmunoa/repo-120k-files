// fichero 19853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19853;

Registro19853 crear_registro19853(int id) {
    Registro19853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
