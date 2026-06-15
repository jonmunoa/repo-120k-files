// fichero 45817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45817;

Registro45817 crear_registro45817(int id) {
    Registro45817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
