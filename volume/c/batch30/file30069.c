// fichero 30069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30069;

Registro30069 crear_registro30069(int id) {
    Registro30069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
