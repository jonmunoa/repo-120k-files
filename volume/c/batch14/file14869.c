// fichero 14869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14869;

Registro14869 crear_registro14869(int id) {
    Registro14869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
