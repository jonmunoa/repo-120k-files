// fichero 37621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37621;

Registro37621 crear_registro37621(int id) {
    Registro37621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
