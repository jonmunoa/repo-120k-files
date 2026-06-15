// fichero 1081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1081;

Registro1081 crear_registro1081(int id) {
    Registro1081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
