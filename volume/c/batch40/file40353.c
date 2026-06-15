// fichero 40353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40353;

Registro40353 crear_registro40353(int id) {
    Registro40353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
