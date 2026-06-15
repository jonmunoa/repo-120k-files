// fichero 2193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2193;

Registro2193 crear_registro2193(int id) {
    Registro2193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
