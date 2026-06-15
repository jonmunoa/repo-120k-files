// fichero 3885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3885;

Registro3885 crear_registro3885(int id) {
    Registro3885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
