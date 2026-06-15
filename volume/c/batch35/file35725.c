// fichero 35725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35725;

Registro35725 crear_registro35725(int id) {
    Registro35725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
