// fichero 47901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47901;

Registro47901 crear_registro47901(int id) {
    Registro47901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
