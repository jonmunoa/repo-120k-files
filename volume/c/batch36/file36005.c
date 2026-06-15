// fichero 36005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36005;

Registro36005 crear_registro36005(int id) {
    Registro36005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
