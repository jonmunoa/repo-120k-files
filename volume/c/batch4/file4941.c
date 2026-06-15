// fichero 4941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4941;

Registro4941 crear_registro4941(int id) {
    Registro4941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
