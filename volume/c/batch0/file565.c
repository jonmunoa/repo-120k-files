// fichero 565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro565;

Registro565 crear_registro565(int id) {
    Registro565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
