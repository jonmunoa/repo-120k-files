// fichero 41649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41649;

Registro41649 crear_registro41649(int id) {
    Registro41649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
