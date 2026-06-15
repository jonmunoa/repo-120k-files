// fichero 3293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3293;

Registro3293 crear_registro3293(int id) {
    Registro3293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
