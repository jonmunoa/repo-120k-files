// fichero 17157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17157;

Registro17157 crear_registro17157(int id) {
    Registro17157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
