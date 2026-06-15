// fichero 19557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19557;

Registro19557 crear_registro19557(int id) {
    Registro19557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
