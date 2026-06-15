// fichero 24353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24353;

Registro24353 crear_registro24353(int id) {
    Registro24353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
