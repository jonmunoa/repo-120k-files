// fichero 28237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28237;

Registro28237 crear_registro28237(int id) {
    Registro28237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
