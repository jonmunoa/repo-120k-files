// fichero 12729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12729;

Registro12729 crear_registro12729(int id) {
    Registro12729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
