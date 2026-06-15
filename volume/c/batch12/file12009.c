// fichero 12009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12009;

Registro12009 crear_registro12009(int id) {
    Registro12009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
