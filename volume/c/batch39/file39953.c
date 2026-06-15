// fichero 39953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39953;

Registro39953 crear_registro39953(int id) {
    Registro39953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
