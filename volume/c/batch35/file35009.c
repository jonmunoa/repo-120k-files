// fichero 35009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35009;

Registro35009 crear_registro35009(int id) {
    Registro35009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
