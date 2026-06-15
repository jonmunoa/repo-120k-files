// fichero 3261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3261;

Registro3261 crear_registro3261(int id) {
    Registro3261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
