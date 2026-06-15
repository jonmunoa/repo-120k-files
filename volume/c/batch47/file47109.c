// fichero 47109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47109;

Registro47109 crear_registro47109(int id) {
    Registro47109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
