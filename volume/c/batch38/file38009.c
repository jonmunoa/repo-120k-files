// fichero 38009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38009;

Registro38009 crear_registro38009(int id) {
    Registro38009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
