// fichero 5613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5613;

Registro5613 crear_registro5613(int id) {
    Registro5613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
