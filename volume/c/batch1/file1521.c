// fichero 1521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1521;

Registro1521 crear_registro1521(int id) {
    Registro1521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
