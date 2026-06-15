// fichero 5749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5749;

Registro5749 crear_registro5749(int id) {
    Registro5749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
