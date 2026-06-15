// fichero 21649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21649;

Registro21649 crear_registro21649(int id) {
    Registro21649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
