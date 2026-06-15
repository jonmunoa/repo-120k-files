// fichero 34677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34677;

Registro34677 crear_registro34677(int id) {
    Registro34677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
