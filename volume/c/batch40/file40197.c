// fichero 40197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40197;

Registro40197 crear_registro40197(int id) {
    Registro40197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
