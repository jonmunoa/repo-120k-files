// fichero 19173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19173;

Registro19173 crear_registro19173(int id) {
    Registro19173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
