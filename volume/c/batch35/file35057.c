// fichero 35057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35057;

Registro35057 crear_registro35057(int id) {
    Registro35057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
