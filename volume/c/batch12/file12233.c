// fichero 12233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12233;

Registro12233 crear_registro12233(int id) {
    Registro12233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
