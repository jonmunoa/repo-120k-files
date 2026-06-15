// fichero 1933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1933;

Registro1933 crear_registro1933(int id) {
    Registro1933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
