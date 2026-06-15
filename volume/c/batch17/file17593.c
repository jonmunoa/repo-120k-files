// fichero 17593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17593;

Registro17593 crear_registro17593(int id) {
    Registro17593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
