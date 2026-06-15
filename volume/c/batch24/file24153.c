// fichero 24153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24153;

Registro24153 crear_registro24153(int id) {
    Registro24153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
