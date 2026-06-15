// fichero 49789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49789;

Registro49789 crear_registro49789(int id) {
    Registro49789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
