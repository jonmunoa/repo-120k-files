// fichero 15965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15965;

Registro15965 crear_registro15965(int id) {
    Registro15965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
