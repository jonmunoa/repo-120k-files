// fichero 45749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45749;

Registro45749 crear_registro45749(int id) {
    Registro45749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
