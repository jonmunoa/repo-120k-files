// fichero 36961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36961;

Registro36961 crear_registro36961(int id) {
    Registro36961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
