// fichero 181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro181;

Registro181 crear_registro181(int id) {
    Registro181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
