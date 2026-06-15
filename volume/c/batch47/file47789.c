// fichero 47789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47789;

Registro47789 crear_registro47789(int id) {
    Registro47789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
