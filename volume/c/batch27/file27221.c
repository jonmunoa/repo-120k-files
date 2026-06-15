// fichero 27221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27221;

Registro27221 crear_registro27221(int id) {
    Registro27221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
