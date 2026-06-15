// fichero 35765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35765;

Registro35765 crear_registro35765(int id) {
    Registro35765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
