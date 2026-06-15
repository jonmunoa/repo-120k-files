// fichero 18845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18845;

Registro18845 crear_registro18845(int id) {
    Registro18845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
