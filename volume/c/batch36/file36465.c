// fichero 36465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36465;

Registro36465 crear_registro36465(int id) {
    Registro36465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
