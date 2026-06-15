// fichero 37333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37333;

Registro37333 crear_registro37333(int id) {
    Registro37333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
