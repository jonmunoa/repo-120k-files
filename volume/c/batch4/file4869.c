// fichero 4869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4869;

Registro4869 crear_registro4869(int id) {
    Registro4869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
