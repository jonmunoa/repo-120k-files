// fichero 16221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16221;

Registro16221 crear_registro16221(int id) {
    Registro16221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
