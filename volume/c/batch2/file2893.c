// fichero 2893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2893;

Registro2893 crear_registro2893(int id) {
    Registro2893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
