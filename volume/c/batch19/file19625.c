// fichero 19625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19625;

Registro19625 crear_registro19625(int id) {
    Registro19625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
