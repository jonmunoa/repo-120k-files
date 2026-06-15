// fichero 34629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34629;

Registro34629 crear_registro34629(int id) {
    Registro34629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
