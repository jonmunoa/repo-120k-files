// fichero 5501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5501;

Registro5501 crear_registro5501(int id) {
    Registro5501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
