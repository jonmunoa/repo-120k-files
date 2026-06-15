// fichero 35621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35621;

Registro35621 crear_registro35621(int id) {
    Registro35621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
