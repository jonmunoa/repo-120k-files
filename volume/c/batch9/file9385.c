// fichero 9385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9385;

Registro9385 crear_registro9385(int id) {
    Registro9385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
