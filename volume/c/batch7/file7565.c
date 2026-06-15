// fichero 7565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7565;

Registro7565 crear_registro7565(int id) {
    Registro7565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
