// fichero 12845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12845;

Registro12845 crear_registro12845(int id) {
    Registro12845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
