// fichero 19181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19181;

Registro19181 crear_registro19181(int id) {
    Registro19181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
