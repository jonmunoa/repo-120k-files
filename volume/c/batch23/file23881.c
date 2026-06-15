// fichero 23881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23881;

Registro23881 crear_registro23881(int id) {
    Registro23881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
