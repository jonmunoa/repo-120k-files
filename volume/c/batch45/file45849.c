// fichero 45849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45849;

Registro45849 crear_registro45849(int id) {
    Registro45849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
