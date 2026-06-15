// fichero 11005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11005;

Registro11005 crear_registro11005(int id) {
    Registro11005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
