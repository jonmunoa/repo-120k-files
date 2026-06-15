// fichero 11025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11025;

Registro11025 crear_registro11025(int id) {
    Registro11025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
