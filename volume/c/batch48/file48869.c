// fichero 48869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48869;

Registro48869 crear_registro48869(int id) {
    Registro48869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
