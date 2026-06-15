// fichero 7757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7757;

Registro7757 crear_registro7757(int id) {
    Registro7757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
