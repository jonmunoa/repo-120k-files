// fichero 40045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40045;

Registro40045 crear_registro40045(int id) {
    Registro40045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
