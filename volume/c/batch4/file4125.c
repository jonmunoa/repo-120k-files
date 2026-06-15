// fichero 4125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4125;

Registro4125 crear_registro4125(int id) {
    Registro4125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
