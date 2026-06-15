// fichero 45761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45761;

Registro45761 crear_registro45761(int id) {
    Registro45761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
