// fichero 1173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1173;

Registro1173 crear_registro1173(int id) {
    Registro1173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
