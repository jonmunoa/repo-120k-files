// fichero 34145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34145;

Registro34145 crear_registro34145(int id) {
    Registro34145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
