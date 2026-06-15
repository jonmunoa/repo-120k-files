// fichero 24785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24785;

Registro24785 crear_registro24785(int id) {
    Registro24785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
