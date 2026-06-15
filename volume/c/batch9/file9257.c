// fichero 9257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9257;

Registro9257 crear_registro9257(int id) {
    Registro9257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
