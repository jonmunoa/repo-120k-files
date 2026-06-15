// fichero 28657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28657;

Registro28657 crear_registro28657(int id) {
    Registro28657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
