// fichero 48117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48117;

Registro48117 crear_registro48117(int id) {
    Registro48117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
