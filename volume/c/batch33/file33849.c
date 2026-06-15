// fichero 33849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33849;

Registro33849 crear_registro33849(int id) {
    Registro33849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
