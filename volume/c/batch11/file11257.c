// fichero 11257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11257;

Registro11257 crear_registro11257(int id) {
    Registro11257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
