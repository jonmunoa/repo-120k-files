// fichero 4885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4885;

Registro4885 crear_registro4885(int id) {
    Registro4885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
