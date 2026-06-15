// fichero 36649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36649;

Registro36649 crear_registro36649(int id) {
    Registro36649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
