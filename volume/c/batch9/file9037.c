// fichero 9037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9037;

Registro9037 crear_registro9037(int id) {
    Registro9037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
