// fichero 17649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17649;

Registro17649 crear_registro17649(int id) {
    Registro17649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
