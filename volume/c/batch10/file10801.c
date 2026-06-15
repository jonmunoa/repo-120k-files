// fichero 10801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10801;

Registro10801 crear_registro10801(int id) {
    Registro10801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
