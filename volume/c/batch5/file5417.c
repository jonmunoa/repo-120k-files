// fichero 5417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5417;

Registro5417 crear_registro5417(int id) {
    Registro5417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
