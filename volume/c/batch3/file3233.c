// fichero 3233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3233;

Registro3233 crear_registro3233(int id) {
    Registro3233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
