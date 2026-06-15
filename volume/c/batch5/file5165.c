// fichero 5165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5165;

Registro5165 crear_registro5165(int id) {
    Registro5165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
