// fichero 1261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1261;

Registro1261 crear_registro1261(int id) {
    Registro1261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
