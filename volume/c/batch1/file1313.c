// fichero 1313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1313;

Registro1313 crear_registro1313(int id) {
    Registro1313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
