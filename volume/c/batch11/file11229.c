// fichero 11229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11229;

Registro11229 crear_registro11229(int id) {
    Registro11229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
