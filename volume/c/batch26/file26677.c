// fichero 26677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26677;

Registro26677 crear_registro26677(int id) {
    Registro26677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
