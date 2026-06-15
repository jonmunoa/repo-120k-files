// fichero 34477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34477;

Registro34477 crear_registro34477(int id) {
    Registro34477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
