// fichero 35757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35757;

Registro35757 crear_registro35757(int id) {
    Registro35757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
