// fichero 25849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25849;

Registro25849 crear_registro25849(int id) {
    Registro25849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
