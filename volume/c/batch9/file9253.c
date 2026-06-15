// fichero 9253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9253;

Registro9253 crear_registro9253(int id) {
    Registro9253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
