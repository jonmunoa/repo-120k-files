// fichero 8237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8237;

Registro8237 crear_registro8237(int id) {
    Registro8237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
