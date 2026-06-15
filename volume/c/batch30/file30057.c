// fichero 30057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30057;

Registro30057 crear_registro30057(int id) {
    Registro30057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
