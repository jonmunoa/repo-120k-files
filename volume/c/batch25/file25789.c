// fichero 25789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25789;

Registro25789 crear_registro25789(int id) {
    Registro25789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
