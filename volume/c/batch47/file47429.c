// fichero 47429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47429;

Registro47429 crear_registro47429(int id) {
    Registro47429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
