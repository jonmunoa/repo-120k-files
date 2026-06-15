// fichero 19161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19161;

Registro19161 crear_registro19161(int id) {
    Registro19161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
