// fichero 15849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15849;

Registro15849 crear_registro15849(int id) {
    Registro15849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
