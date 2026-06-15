// fichero 8565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8565;

Registro8565 crear_registro8565(int id) {
    Registro8565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
