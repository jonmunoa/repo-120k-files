// fichero 35853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35853;

Registro35853 crear_registro35853(int id) {
    Registro35853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
