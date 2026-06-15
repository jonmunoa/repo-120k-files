// fichero 36965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36965;

Registro36965 crear_registro36965(int id) {
    Registro36965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
