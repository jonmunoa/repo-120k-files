// fichero 49769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49769;

Registro49769 crear_registro49769(int id) {
    Registro49769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
