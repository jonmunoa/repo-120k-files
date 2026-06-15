// fichero 25881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25881;

Registro25881 crear_registro25881(int id) {
    Registro25881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
