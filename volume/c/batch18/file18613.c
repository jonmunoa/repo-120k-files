// fichero 18613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18613;

Registro18613 crear_registro18613(int id) {
    Registro18613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
