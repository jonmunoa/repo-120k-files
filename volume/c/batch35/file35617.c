// fichero 35617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35617;

Registro35617 crear_registro35617(int id) {
    Registro35617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
