// fichero 10301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10301;

Registro10301 crear_registro10301(int id) {
    Registro10301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
