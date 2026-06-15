// fichero 28941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28941;

Registro28941 crear_registro28941(int id) {
    Registro28941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
