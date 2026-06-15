// fichero 22109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22109;

Registro22109 crear_registro22109(int id) {
    Registro22109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
