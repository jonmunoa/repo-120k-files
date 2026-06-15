// fichero 1993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1993;

Registro1993 crear_registro1993(int id) {
    Registro1993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
