// fichero 16465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16465;

Registro16465 crear_registro16465(int id) {
    Registro16465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
