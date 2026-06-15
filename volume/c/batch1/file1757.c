// fichero 1757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1757;

Registro1757 crear_registro1757(int id) {
    Registro1757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
