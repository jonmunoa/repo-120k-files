// fichero 27261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27261;

Registro27261 crear_registro27261(int id) {
    Registro27261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
