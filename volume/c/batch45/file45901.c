// fichero 45901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45901;

Registro45901 crear_registro45901(int id) {
    Registro45901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
