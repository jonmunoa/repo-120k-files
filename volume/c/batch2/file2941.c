// fichero 2941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2941;

Registro2941 crear_registro2941(int id) {
    Registro2941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
