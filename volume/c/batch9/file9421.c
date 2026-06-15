// fichero 9421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9421;

Registro9421 crear_registro9421(int id) {
    Registro9421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
