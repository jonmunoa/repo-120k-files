// fichero 11605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11605;

Registro11605 crear_registro11605(int id) {
    Registro11605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
