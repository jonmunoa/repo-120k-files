// fichero 5565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5565;

Registro5565 crear_registro5565(int id) {
    Registro5565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
