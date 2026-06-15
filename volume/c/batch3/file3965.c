// fichero 3965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3965;

Registro3965 crear_registro3965(int id) {
    Registro3965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
