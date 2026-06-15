// fichero 49553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49553;

Registro49553 crear_registro49553(int id) {
    Registro49553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
