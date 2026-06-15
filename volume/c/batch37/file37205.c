// fichero 37205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37205;

Registro37205 crear_registro37205(int id) {
    Registro37205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
