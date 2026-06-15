// fichero 7901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7901;

Registro7901 crear_registro7901(int id) {
    Registro7901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
