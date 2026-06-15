// fichero 37057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37057;

Registro37057 crear_registro37057(int id) {
    Registro37057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
