// fichero 35077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35077;

Registro35077 crear_registro35077(int id) {
    Registro35077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
