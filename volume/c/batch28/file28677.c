// fichero 28677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28677;

Registro28677 crear_registro28677(int id) {
    Registro28677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
