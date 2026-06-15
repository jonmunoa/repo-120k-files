// fichero 35409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35409;

Registro35409 crear_registro35409(int id) {
    Registro35409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
