// fichero 8313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8313;

Registro8313 crear_registro8313(int id) {
    Registro8313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
