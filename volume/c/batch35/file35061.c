// fichero 35061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35061;

Registro35061 crear_registro35061(int id) {
    Registro35061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
