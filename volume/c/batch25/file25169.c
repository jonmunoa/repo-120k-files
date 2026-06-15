// fichero 25169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25169;

Registro25169 crear_registro25169(int id) {
    Registro25169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
