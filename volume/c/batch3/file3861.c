// fichero 3861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3861;

Registro3861 crear_registro3861(int id) {
    Registro3861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
