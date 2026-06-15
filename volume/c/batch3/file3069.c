// fichero 3069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3069;

Registro3069 crear_registro3069(int id) {
    Registro3069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
