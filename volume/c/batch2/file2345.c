// fichero 2345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2345;

Registro2345 crear_registro2345(int id) {
    Registro2345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
