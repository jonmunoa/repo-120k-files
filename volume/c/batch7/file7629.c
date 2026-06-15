// fichero 7629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7629;

Registro7629 crear_registro7629(int id) {
    Registro7629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
