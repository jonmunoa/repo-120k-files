// fichero 2901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2901;

Registro2901 crear_registro2901(int id) {
    Registro2901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
