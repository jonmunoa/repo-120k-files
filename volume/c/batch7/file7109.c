// fichero 7109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7109;

Registro7109 crear_registro7109(int id) {
    Registro7109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
