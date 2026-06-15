// fichero 34533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34533;

Registro34533 crear_registro34533(int id) {
    Registro34533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
