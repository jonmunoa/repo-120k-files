// fichero 28329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28329;

Registro28329 crear_registro28329(int id) {
    Registro28329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
