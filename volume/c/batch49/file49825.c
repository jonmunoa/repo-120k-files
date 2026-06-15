// fichero 49825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49825;

Registro49825 crear_registro49825(int id) {
    Registro49825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
