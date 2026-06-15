// fichero 40517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40517;

Registro40517 crear_registro40517(int id) {
    Registro40517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
