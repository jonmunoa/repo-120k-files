// fichero 28261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28261;

Registro28261 crear_registro28261(int id) {
    Registro28261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
