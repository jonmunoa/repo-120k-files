// fichero 12265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12265;

Registro12265 crear_registro12265(int id) {
    Registro12265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
