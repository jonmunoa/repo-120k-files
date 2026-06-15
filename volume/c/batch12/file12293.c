// fichero 12293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12293;

Registro12293 crear_registro12293(int id) {
    Registro12293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
