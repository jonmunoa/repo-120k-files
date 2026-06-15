// fichero 19861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19861;

Registro19861 crear_registro19861(int id) {
    Registro19861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
