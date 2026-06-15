// fichero 17317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17317;

Registro17317 crear_registro17317(int id) {
    Registro17317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
