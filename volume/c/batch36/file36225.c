// fichero 36225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36225;

Registro36225 crear_registro36225(int id) {
    Registro36225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
