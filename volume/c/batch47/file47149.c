// fichero 47149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47149;

Registro47149 crear_registro47149(int id) {
    Registro47149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
