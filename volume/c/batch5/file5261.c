// fichero 5261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5261;

Registro5261 crear_registro5261(int id) {
    Registro5261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
