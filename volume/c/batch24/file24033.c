// fichero 24033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24033;

Registro24033 crear_registro24033(int id) {
    Registro24033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
