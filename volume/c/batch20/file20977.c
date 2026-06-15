// fichero 20977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20977;

Registro20977 crear_registro20977(int id) {
    Registro20977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
