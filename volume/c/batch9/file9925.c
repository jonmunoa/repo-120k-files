// fichero 9925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9925;

Registro9925 crear_registro9925(int id) {
    Registro9925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
