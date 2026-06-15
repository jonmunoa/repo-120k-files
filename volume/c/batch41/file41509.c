// fichero 41509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41509;

Registro41509 crear_registro41509(int id) {
    Registro41509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
