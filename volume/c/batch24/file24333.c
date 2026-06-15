// fichero 24333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24333;

Registro24333 crear_registro24333(int id) {
    Registro24333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
