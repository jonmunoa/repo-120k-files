// fichero 41429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41429;

Registro41429 crear_registro41429(int id) {
    Registro41429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
