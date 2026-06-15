// fichero 47769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47769;

Registro47769 crear_registro47769(int id) {
    Registro47769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
