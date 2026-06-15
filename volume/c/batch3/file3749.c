// fichero 3749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3749;

Registro3749 crear_registro3749(int id) {
    Registro3749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
