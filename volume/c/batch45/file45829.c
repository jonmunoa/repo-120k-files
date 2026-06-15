// fichero 45829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45829;

Registro45829 crear_registro45829(int id) {
    Registro45829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
