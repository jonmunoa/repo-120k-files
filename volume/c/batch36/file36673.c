// fichero 36673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36673;

Registro36673 crear_registro36673(int id) {
    Registro36673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
