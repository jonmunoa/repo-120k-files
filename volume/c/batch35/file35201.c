// fichero 35201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35201;

Registro35201 crear_registro35201(int id) {
    Registro35201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
