// fichero 19165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19165;

Registro19165 crear_registro19165(int id) {
    Registro19165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
