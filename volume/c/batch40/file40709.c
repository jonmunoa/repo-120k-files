// fichero 40709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40709;

Registro40709 crear_registro40709(int id) {
    Registro40709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
