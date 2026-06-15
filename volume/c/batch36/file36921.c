// fichero 36921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36921;

Registro36921 crear_registro36921(int id) {
    Registro36921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
