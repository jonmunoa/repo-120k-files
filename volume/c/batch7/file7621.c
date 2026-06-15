// fichero 7621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7621;

Registro7621 crear_registro7621(int id) {
    Registro7621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
