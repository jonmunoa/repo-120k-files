// fichero 35081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35081;

Registro35081 crear_registro35081(int id) {
    Registro35081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
