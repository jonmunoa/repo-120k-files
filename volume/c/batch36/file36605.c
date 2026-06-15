// fichero 36605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36605;

Registro36605 crear_registro36605(int id) {
    Registro36605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
