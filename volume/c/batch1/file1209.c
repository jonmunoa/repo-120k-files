// fichero 1209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1209;

Registro1209 crear_registro1209(int id) {
    Registro1209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
