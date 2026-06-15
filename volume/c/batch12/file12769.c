// fichero 12769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12769;

Registro12769 crear_registro12769(int id) {
    Registro12769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
