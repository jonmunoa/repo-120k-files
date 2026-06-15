// fichero 35173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35173;

Registro35173 crear_registro35173(int id) {
    Registro35173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
