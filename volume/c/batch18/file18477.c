// fichero 18477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18477;

Registro18477 crear_registro18477(int id) {
    Registro18477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
