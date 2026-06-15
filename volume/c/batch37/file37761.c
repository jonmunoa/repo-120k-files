// fichero 37761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37761;

Registro37761 crear_registro37761(int id) {
    Registro37761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
