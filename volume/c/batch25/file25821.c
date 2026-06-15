// fichero 25821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25821;

Registro25821 crear_registro25821(int id) {
    Registro25821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
