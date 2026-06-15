// fichero 29965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29965;

Registro29965 crear_registro29965(int id) {
    Registro29965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
