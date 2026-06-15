// fichero 12393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12393;

Registro12393 crear_registro12393(int id) {
    Registro12393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
