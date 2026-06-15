// fichero 1713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1713;

Registro1713 crear_registro1713(int id) {
    Registro1713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
