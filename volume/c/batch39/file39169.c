// fichero 39169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39169;

Registro39169 crear_registro39169(int id) {
    Registro39169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
