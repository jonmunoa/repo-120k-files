// fichero 30137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30137;

Registro30137 crear_registro30137(int id) {
    Registro30137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
