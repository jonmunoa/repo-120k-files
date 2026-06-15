// fichero 165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro165;

Registro165 crear_registro165(int id) {
    Registro165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
