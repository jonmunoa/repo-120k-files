// fichero 37837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37837;

Registro37837 crear_registro37837(int id) {
    Registro37837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
