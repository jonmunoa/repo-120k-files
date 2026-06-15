// fichero 5093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5093;

Registro5093 crear_registro5093(int id) {
    Registro5093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
