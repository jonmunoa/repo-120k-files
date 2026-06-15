// fichero 26261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26261;

Registro26261 crear_registro26261(int id) {
    Registro26261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
