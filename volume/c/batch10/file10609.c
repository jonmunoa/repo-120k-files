// fichero 10609 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10609;

Registro10609 crear_registro10609(int id) {
    Registro10609 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
