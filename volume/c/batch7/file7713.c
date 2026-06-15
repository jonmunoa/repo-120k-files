// fichero 7713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7713;

Registro7713 crear_registro7713(int id) {
    Registro7713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
