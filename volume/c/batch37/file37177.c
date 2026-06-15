// fichero 37177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37177;

Registro37177 crear_registro37177(int id) {
    Registro37177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
