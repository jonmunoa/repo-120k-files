// fichero 47861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47861;

Registro47861 crear_registro47861(int id) {
    Registro47861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
