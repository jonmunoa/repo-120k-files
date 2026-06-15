// fichero 14117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14117;

Registro14117 crear_registro14117(int id) {
    Registro14117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
