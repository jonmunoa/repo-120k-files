// fichero 19657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19657;

Registro19657 crear_registro19657(int id) {
    Registro19657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
