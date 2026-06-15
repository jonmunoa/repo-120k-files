// fichero 17061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17061;

Registro17061 crear_registro17061(int id) {
    Registro17061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
