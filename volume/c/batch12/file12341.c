// fichero 12341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12341;

Registro12341 crear_registro12341(int id) {
    Registro12341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
