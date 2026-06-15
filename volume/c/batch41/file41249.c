// fichero 41249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41249;

Registro41249 crear_registro41249(int id) {
    Registro41249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
