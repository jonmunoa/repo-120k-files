// fichero 7977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7977;

Registro7977 crear_registro7977(int id) {
    Registro7977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
