// fichero 36577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36577;

Registro36577 crear_registro36577(int id) {
    Registro36577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
