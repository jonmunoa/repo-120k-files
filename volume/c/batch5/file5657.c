// fichero 5657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5657;

Registro5657 crear_registro5657(int id) {
    Registro5657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
