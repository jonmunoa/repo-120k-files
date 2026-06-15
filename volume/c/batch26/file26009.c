// fichero 26009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26009;

Registro26009 crear_registro26009(int id) {
    Registro26009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
