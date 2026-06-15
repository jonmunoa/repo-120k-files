// fichero 45333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45333;

Registro45333 crear_registro45333(int id) {
    Registro45333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
