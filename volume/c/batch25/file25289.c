// fichero 25289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25289;

Registro25289 crear_registro25289(int id) {
    Registro25289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
