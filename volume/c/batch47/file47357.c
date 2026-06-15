// fichero 47357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47357;

Registro47357 crear_registro47357(int id) {
    Registro47357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
