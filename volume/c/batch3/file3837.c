// fichero 3837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3837;

Registro3837 crear_registro3837(int id) {
    Registro3837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
