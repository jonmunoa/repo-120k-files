// fichero 46901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46901;

Registro46901 crear_registro46901(int id) {
    Registro46901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
