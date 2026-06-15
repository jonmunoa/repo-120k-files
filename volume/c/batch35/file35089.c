// fichero 35089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35089;

Registro35089 crear_registro35089(int id) {
    Registro35089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
