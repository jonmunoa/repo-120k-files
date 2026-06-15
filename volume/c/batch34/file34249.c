// fichero 34249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34249;

Registro34249 crear_registro34249(int id) {
    Registro34249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
