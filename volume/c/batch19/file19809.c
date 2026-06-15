// fichero 19809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19809;

Registro19809 crear_registro19809(int id) {
    Registro19809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
