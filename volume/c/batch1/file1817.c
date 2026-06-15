// fichero 1817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1817;

Registro1817 crear_registro1817(int id) {
    Registro1817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
