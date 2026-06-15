// fichero 1193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1193;

Registro1193 crear_registro1193(int id) {
    Registro1193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
