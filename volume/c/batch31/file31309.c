// fichero 31309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31309;

Registro31309 crear_registro31309(int id) {
    Registro31309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
