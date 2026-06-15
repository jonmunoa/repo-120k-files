// fichero 24009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24009;

Registro24009 crear_registro24009(int id) {
    Registro24009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
