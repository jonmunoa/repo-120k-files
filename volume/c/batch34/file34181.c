// fichero 34181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34181;

Registro34181 crear_registro34181(int id) {
    Registro34181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
