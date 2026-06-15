// fichero 44641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44641;

Registro44641 crear_registro44641(int id) {
    Registro44641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
