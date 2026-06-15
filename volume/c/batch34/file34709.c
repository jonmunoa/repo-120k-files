// fichero 34709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34709;

Registro34709 crear_registro34709(int id) {
    Registro34709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
