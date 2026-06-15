// fichero 10401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10401;

Registro10401 crear_registro10401(int id) {
    Registro10401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
