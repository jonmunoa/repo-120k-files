// fichero 47205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47205;

Registro47205 crear_registro47205(int id) {
    Registro47205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
