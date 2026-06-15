// fichero 3961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3961;

Registro3961 crear_registro3961(int id) {
    Registro3961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
