// fichero 30661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30661;

Registro30661 crear_registro30661(int id) {
    Registro30661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
