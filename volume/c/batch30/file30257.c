// fichero 30257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30257;

Registro30257 crear_registro30257(int id) {
    Registro30257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
