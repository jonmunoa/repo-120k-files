// fichero 12429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12429;

Registro12429 crear_registro12429(int id) {
    Registro12429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
