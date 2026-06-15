// fichero 21057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21057;

Registro21057 crear_registro21057(int id) {
    Registro21057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
