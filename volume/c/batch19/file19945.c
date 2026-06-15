// fichero 19945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19945;

Registro19945 crear_registro19945(int id) {
    Registro19945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
