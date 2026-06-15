// fichero 7129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7129;

Registro7129 crear_registro7129(int id) {
    Registro7129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
