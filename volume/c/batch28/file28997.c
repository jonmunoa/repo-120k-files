// fichero 28997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28997;

Registro28997 crear_registro28997(int id) {
    Registro28997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
