// fichero 36517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36517;

Registro36517 crear_registro36517(int id) {
    Registro36517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
