// fichero 35369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35369;

Registro35369 crear_registro35369(int id) {
    Registro35369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
