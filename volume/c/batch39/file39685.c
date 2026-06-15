// fichero 39685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39685;

Registro39685 crear_registro39685(int id) {
    Registro39685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
