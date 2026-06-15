// fichero 36689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36689;

Registro36689 crear_registro36689(int id) {
    Registro36689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
