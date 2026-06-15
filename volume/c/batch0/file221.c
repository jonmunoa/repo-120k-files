// fichero 221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro221;

Registro221 crear_registro221(int id) {
    Registro221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
