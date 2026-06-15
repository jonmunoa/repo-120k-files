// fichero 30985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30985;

Registro30985 crear_registro30985(int id) {
    Registro30985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
