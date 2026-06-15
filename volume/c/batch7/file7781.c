// fichero 7781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7781;

Registro7781 crear_registro7781(int id) {
    Registro7781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
