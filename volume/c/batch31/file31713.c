// fichero 31713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31713;

Registro31713 crear_registro31713(int id) {
    Registro31713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
