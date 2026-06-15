// fichero 19009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19009;

Registro19009 crear_registro19009(int id) {
    Registro19009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
