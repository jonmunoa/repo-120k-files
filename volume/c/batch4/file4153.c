// fichero 4153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4153;

Registro4153 crear_registro4153(int id) {
    Registro4153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
