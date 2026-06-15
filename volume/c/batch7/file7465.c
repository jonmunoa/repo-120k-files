// fichero 7465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7465;

Registro7465 crear_registro7465(int id) {
    Registro7465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
