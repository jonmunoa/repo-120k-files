// fichero 39697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39697;

Registro39697 crear_registro39697(int id) {
    Registro39697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
