// fichero 3157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3157;

Registro3157 crear_registro3157(int id) {
    Registro3157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
