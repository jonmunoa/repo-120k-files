// fichero 36813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36813;

Registro36813 crear_registro36813(int id) {
    Registro36813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
