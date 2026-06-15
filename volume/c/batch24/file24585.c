// fichero 24585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24585;

Registro24585 crear_registro24585(int id) {
    Registro24585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
