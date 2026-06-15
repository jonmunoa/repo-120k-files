// fichero 37165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37165;

Registro37165 crear_registro37165(int id) {
    Registro37165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
