// fichero 38977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38977;

Registro38977 crear_registro38977(int id) {
    Registro38977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
