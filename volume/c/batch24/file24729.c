// fichero 24729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24729;

Registro24729 crear_registro24729(int id) {
    Registro24729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
