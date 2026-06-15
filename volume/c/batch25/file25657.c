// fichero 25657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25657;

Registro25657 crear_registro25657(int id) {
    Registro25657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
