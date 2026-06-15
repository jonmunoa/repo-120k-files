// fichero 12021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12021;

Registro12021 crear_registro12021(int id) {
    Registro12021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
