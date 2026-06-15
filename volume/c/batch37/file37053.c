// fichero 37053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37053;

Registro37053 crear_registro37053(int id) {
    Registro37053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
