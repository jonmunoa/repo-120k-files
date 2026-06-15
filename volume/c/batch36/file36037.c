// fichero 36037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36037;

Registro36037 crear_registro36037(int id) {
    Registro36037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
