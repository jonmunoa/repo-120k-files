// fichero 35673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35673;

Registro35673 crear_registro35673(int id) {
    Registro35673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
