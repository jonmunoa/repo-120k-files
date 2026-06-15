// fichero 35769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35769;

Registro35769 crear_registro35769(int id) {
    Registro35769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
