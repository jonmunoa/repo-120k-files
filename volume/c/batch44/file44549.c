// fichero 44549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44549;

Registro44549 crear_registro44549(int id) {
    Registro44549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
