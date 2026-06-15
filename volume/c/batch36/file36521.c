// fichero 36521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36521;

Registro36521 crear_registro36521(int id) {
    Registro36521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
