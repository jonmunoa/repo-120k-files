// fichero 35753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35753;

Registro35753 crear_registro35753(int id) {
    Registro35753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
