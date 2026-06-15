// fichero 45977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45977;

Registro45977 crear_registro45977(int id) {
    Registro45977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
