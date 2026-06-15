// fichero 9513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9513;

Registro9513 crear_registro9513(int id) {
    Registro9513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
