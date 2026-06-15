// fichero 19729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19729;

Registro19729 crear_registro19729(int id) {
    Registro19729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
