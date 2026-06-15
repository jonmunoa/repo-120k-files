// fichero 5977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5977;

Registro5977 crear_registro5977(int id) {
    Registro5977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
