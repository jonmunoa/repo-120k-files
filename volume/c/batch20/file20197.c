// fichero 20197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20197;

Registro20197 crear_registro20197(int id) {
    Registro20197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
