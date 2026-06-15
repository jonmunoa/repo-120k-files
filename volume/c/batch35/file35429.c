// fichero 35429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35429;

Registro35429 crear_registro35429(int id) {
    Registro35429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
