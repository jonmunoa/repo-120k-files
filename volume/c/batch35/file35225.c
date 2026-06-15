// fichero 35225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35225;

Registro35225 crear_registro35225(int id) {
    Registro35225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
