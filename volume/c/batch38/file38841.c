// fichero 38841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38841;

Registro38841 crear_registro38841(int id) {
    Registro38841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
