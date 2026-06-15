// fichero 12081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12081;

Registro12081 crear_registro12081(int id) {
    Registro12081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
