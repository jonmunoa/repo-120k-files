// fichero 7893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7893;

Registro7893 crear_registro7893(int id) {
    Registro7893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
