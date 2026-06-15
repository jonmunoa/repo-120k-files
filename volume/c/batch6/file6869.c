// fichero 6869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6869;

Registro6869 crear_registro6869(int id) {
    Registro6869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
