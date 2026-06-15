// fichero 7261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7261;

Registro7261 crear_registro7261(int id) {
    Registro7261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
