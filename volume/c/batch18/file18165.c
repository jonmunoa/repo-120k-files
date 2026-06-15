// fichero 18165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18165;

Registro18165 crear_registro18165(int id) {
    Registro18165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
