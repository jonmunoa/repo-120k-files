// fichero 3677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3677;

Registro3677 crear_registro3677(int id) {
    Registro3677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
