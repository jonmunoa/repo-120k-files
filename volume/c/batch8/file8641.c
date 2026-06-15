// fichero 8641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8641;

Registro8641 crear_registro8641(int id) {
    Registro8641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
