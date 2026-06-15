// fichero 25957 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25957;

Registro25957 crear_registro25957(int id) {
    Registro25957 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
