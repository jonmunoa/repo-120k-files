// fichero 34157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34157;

Registro34157 crear_registro34157(int id) {
    Registro34157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
