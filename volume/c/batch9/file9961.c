// fichero 9961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9961;

Registro9961 crear_registro9961(int id) {
    Registro9961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
