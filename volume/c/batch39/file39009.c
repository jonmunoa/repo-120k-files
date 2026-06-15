// fichero 39009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39009;

Registro39009 crear_registro39009(int id) {
    Registro39009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
