// fichero 4429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4429;

Registro4429 crear_registro4429(int id) {
    Registro4429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
