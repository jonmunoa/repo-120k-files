// fichero 17861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17861;

Registro17861 crear_registro17861(int id) {
    Registro17861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
