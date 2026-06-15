// fichero 36421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36421;

Registro36421 crear_registro36421(int id) {
    Registro36421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
