// fichero 35613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35613;

Registro35613 crear_registro35613(int id) {
    Registro35613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
