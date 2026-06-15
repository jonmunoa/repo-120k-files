// fichero 36253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36253;

Registro36253 crear_registro36253(int id) {
    Registro36253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
