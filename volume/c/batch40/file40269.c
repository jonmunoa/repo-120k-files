// fichero 40269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40269;

Registro40269 crear_registro40269(int id) {
    Registro40269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
