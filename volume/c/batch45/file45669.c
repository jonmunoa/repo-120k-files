// fichero 45669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45669;

Registro45669 crear_registro45669(int id) {
    Registro45669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
