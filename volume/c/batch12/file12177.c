// fichero 12177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12177;

Registro12177 crear_registro12177(int id) {
    Registro12177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
