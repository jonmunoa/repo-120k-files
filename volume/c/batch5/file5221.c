// fichero 5221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5221;

Registro5221 crear_registro5221(int id) {
    Registro5221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
