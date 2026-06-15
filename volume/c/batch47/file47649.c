// fichero 47649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47649;

Registro47649 crear_registro47649(int id) {
    Registro47649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
