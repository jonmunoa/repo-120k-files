// fichero 30569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30569;

Registro30569 crear_registro30569(int id) {
    Registro30569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
