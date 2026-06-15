// fichero 35049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35049;

Registro35049 crear_registro35049(int id) {
    Registro35049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
