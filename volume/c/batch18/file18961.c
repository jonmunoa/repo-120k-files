// fichero 18961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18961;

Registro18961 crear_registro18961(int id) {
    Registro18961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
