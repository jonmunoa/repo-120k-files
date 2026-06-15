// fichero 8713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8713;

Registro8713 crear_registro8713(int id) {
    Registro8713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
