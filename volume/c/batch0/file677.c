// fichero 677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro677;

Registro677 crear_registro677(int id) {
    Registro677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
