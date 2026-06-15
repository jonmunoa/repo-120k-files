// fichero 35357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35357;

Registro35357 crear_registro35357(int id) {
    Registro35357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
