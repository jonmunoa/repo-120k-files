// fichero 35217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35217;

Registro35217 crear_registro35217(int id) {
    Registro35217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
