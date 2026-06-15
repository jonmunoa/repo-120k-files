// fichero 35869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35869;

Registro35869 crear_registro35869(int id) {
    Registro35869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
