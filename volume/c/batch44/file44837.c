// fichero 44837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44837;

Registro44837 crear_registro44837(int id) {
    Registro44837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
