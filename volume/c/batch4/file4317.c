// fichero 4317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4317;

Registro4317 crear_registro4317(int id) {
    Registro4317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
