// fichero 12125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12125;

Registro12125 crear_registro12125(int id) {
    Registro12125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
