// fichero 10677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10677;

Registro10677 crear_registro10677(int id) {
    Registro10677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
