// fichero 16077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16077;

Registro16077 crear_registro16077(int id) {
    Registro16077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
