// fichero 10325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10325;

Registro10325 crear_registro10325(int id) {
    Registro10325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
