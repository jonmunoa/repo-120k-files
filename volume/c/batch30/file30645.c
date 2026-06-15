// fichero 30645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30645;

Registro30645 crear_registro30645(int id) {
    Registro30645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
