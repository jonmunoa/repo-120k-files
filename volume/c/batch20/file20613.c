// fichero 20613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20613;

Registro20613 crear_registro20613(int id) {
    Registro20613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
