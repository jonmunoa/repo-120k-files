// fichero 5321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5321;

Registro5321 crear_registro5321(int id) {
    Registro5321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
