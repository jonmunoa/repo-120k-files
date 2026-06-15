// fichero 7481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7481;

Registro7481 crear_registro7481(int id) {
    Registro7481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
