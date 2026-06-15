// fichero 12069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12069;

Registro12069 crear_registro12069(int id) {
    Registro12069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
