// fichero 45621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45621;

Registro45621 crear_registro45621(int id) {
    Registro45621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
