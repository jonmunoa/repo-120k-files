// fichero 4881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4881;

Registro4881 crear_registro4881(int id) {
    Registro4881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
