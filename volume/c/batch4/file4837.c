// fichero 4837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4837;

Registro4837 crear_registro4837(int id) {
    Registro4837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
