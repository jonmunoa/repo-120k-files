// fichero 11057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11057;

Registro11057 crear_registro11057(int id) {
    Registro11057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
