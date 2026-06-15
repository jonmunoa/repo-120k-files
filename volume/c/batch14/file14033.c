// fichero 14033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14033;

Registro14033 crear_registro14033(int id) {
    Registro14033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
