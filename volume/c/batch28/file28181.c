// fichero 28181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28181;

Registro28181 crear_registro28181(int id) {
    Registro28181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
