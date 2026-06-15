// fichero 35233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35233;

Registro35233 crear_registro35233(int id) {
    Registro35233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
