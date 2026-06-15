// fichero 3705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3705;

Registro3705 crear_registro3705(int id) {
    Registro3705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
