// fichero 25265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25265;

Registro25265 crear_registro25265(int id) {
    Registro25265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
