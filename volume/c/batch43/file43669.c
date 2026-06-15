// fichero 43669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43669;

Registro43669 crear_registro43669(int id) {
    Registro43669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
