// fichero 34965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34965;

Registro34965 crear_registro34965(int id) {
    Registro34965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
