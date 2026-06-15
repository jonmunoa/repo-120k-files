// fichero 45741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45741;

Registro45741 crear_registro45741(int id) {
    Registro45741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
