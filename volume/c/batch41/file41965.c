// fichero 41965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41965;

Registro41965 crear_registro41965(int id) {
    Registro41965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
