// fichero 35433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35433;

Registro35433 crear_registro35433(int id) {
    Registro35433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
