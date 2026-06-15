// fichero 35905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35905;

Registro35905 crear_registro35905(int id) {
    Registro35905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
