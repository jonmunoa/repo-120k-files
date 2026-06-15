// fichero 49049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49049;

Registro49049 crear_registro49049(int id) {
    Registro49049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
