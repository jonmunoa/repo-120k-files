// fichero 39057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39057;

Registro39057 crear_registro39057(int id) {
    Registro39057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
