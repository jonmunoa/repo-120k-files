// fichero 12733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12733;

Registro12733 crear_registro12733(int id) {
    Registro12733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
