// fichero 30005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30005;

Registro30005 crear_registro30005(int id) {
    Registro30005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
