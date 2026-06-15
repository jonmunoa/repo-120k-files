// fichero 19425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19425;

Registro19425 crear_registro19425(int id) {
    Registro19425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
