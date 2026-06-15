// fichero 39629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39629;

Registro39629 crear_registro39629(int id) {
    Registro39629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
