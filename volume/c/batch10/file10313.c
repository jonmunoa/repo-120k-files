// fichero 10313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10313;

Registro10313 crear_registro10313(int id) {
    Registro10313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
