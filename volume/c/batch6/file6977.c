// fichero 6977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6977;

Registro6977 crear_registro6977(int id) {
    Registro6977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
