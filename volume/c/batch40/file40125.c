// fichero 40125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40125;

Registro40125 crear_registro40125(int id) {
    Registro40125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
