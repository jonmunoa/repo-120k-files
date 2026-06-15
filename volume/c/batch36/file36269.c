// fichero 36269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36269;

Registro36269 crear_registro36269(int id) {
    Registro36269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
