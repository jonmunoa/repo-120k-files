// fichero 12217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12217;

Registro12217 crear_registro12217(int id) {
    Registro12217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
