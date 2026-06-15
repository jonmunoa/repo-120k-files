// fichero 3437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3437;

Registro3437 crear_registro3437(int id) {
    Registro3437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
