// fichero 40413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40413;

Registro40413 crear_registro40413(int id) {
    Registro40413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
