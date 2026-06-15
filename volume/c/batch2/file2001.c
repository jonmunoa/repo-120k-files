// fichero 2001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2001;

Registro2001 crear_registro2001(int id) {
    Registro2001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
