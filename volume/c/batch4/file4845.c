// fichero 4845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4845;

Registro4845 crear_registro4845(int id) {
    Registro4845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
