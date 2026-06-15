// fichero 28209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28209;

Registro28209 crear_registro28209(int id) {
    Registro28209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
