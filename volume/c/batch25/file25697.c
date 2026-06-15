// fichero 25697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25697;

Registro25697 crear_registro25697(int id) {
    Registro25697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
