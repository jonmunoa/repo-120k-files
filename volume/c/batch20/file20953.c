// fichero 20953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20953;

Registro20953 crear_registro20953(int id) {
    Registro20953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
