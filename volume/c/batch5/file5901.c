// fichero 5901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5901;

Registro5901 crear_registro5901(int id) {
    Registro5901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
