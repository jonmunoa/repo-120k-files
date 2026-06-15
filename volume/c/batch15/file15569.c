// fichero 15569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15569;

Registro15569 crear_registro15569(int id) {
    Registro15569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
