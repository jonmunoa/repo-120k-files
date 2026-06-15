// fichero 14613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14613;

Registro14613 crear_registro14613(int id) {
    Registro14613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
