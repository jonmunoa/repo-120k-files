// fichero 8009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8009;

Registro8009 crear_registro8009(int id) {
    Registro8009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
