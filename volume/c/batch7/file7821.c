// fichero 7821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7821;

Registro7821 crear_registro7821(int id) {
    Registro7821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
