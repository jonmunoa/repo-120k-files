// fichero 897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro897;

Registro897 crear_registro897(int id) {
    Registro897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
