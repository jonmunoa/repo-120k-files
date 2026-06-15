// fichero 29709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29709;

Registro29709 crear_registro29709(int id) {
    Registro29709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
