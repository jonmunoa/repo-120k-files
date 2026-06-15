// fichero 3313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3313;

Registro3313 crear_registro3313(int id) {
    Registro3313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
