// fichero 17429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17429;

Registro17429 crear_registro17429(int id) {
    Registro17429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
