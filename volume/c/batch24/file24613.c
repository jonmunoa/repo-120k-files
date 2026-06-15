// fichero 24613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24613;

Registro24613 crear_registro24613(int id) {
    Registro24613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
