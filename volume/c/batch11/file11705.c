// fichero 11705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11705;

Registro11705 crear_registro11705(int id) {
    Registro11705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
