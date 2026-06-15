// fichero 9269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9269;

Registro9269 crear_registro9269(int id) {
    Registro9269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
