// fichero 37965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37965;

Registro37965 crear_registro37965(int id) {
    Registro37965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
