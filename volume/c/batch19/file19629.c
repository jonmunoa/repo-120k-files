// fichero 19629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19629;

Registro19629 crear_registro19629(int id) {
    Registro19629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
