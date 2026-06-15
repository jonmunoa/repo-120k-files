// fichero 41057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41057;

Registro41057 crear_registro41057(int id) {
    Registro41057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
