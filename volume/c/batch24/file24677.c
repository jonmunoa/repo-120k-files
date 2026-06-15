// fichero 24677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24677;

Registro24677 crear_registro24677(int id) {
    Registro24677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
