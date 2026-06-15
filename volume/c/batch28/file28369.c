// fichero 28369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28369;

Registro28369 crear_registro28369(int id) {
    Registro28369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
