// fichero 19281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19281;

Registro19281 crear_registro19281(int id) {
    Registro19281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
