// fichero 37749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37749;

Registro37749 crear_registro37749(int id) {
    Registro37749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
