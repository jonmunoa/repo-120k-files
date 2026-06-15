// fichero 14977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14977;

Registro14977 crear_registro14977(int id) {
    Registro14977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
