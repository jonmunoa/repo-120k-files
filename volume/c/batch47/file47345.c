// fichero 47345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47345;

Registro47345 crear_registro47345(int id) {
    Registro47345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
