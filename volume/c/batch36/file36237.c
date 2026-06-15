// fichero 36237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36237;

Registro36237 crear_registro36237(int id) {
    Registro36237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
