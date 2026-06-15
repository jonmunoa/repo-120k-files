// fichero 35977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35977;

Registro35977 crear_registro35977(int id) {
    Registro35977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
