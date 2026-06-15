// fichero 3237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3237;

Registro3237 crear_registro3237(int id) {
    Registro3237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
