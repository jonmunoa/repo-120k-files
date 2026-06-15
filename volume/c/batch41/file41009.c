// fichero 41009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41009;

Registro41009 crear_registro41009(int id) {
    Registro41009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
