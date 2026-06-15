// fichero 31941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31941;

Registro31941 crear_registro31941(int id) {
    Registro31941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
