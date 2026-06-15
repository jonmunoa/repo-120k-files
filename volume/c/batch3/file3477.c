// fichero 3477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3477;

Registro3477 crear_registro3477(int id) {
    Registro3477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
