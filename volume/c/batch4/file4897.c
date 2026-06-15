// fichero 4897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4897;

Registro4897 crear_registro4897(int id) {
    Registro4897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
