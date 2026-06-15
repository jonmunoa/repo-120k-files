// fichero 19313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19313;

Registro19313 crear_registro19313(int id) {
    Registro19313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
