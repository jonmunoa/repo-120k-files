// fichero 35561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35561;

Registro35561 crear_registro35561(int id) {
    Registro35561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
