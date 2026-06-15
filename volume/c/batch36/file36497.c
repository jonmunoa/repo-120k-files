// fichero 36497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36497;

Registro36497 crear_registro36497(int id) {
    Registro36497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
