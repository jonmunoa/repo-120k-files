// fichero 30369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30369;

Registro30369 crear_registro30369(int id) {
    Registro30369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
