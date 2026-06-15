// fichero 10709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10709;

Registro10709 crear_registro10709(int id) {
    Registro10709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
