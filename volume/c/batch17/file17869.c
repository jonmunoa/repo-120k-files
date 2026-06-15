// fichero 17869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17869;

Registro17869 crear_registro17869(int id) {
    Registro17869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
