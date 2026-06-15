// fichero 1301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1301;

Registro1301 crear_registro1301(int id) {
    Registro1301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
