// fichero 9373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9373;

Registro9373 crear_registro9373(int id) {
    Registro9373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
