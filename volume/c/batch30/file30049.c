// fichero 30049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30049;

Registro30049 crear_registro30049(int id) {
    Registro30049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
