// fichero 8525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8525;

Registro8525 crear_registro8525(int id) {
    Registro8525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
