// fichero 34429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34429;

Registro34429 crear_registro34429(int id) {
    Registro34429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
