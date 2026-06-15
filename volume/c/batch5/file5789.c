// fichero 5789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5789;

Registro5789 crear_registro5789(int id) {
    Registro5789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
