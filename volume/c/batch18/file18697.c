// fichero 18697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18697;

Registro18697 crear_registro18697(int id) {
    Registro18697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
