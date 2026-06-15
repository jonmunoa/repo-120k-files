// fichero 9125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9125;

Registro9125 crear_registro9125(int id) {
    Registro9125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
