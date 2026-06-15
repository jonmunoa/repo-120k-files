// fichero 10009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10009;

Registro10009 crear_registro10009(int id) {
    Registro10009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
