// fichero 3425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3425;

Registro3425 crear_registro3425(int id) {
    Registro3425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
