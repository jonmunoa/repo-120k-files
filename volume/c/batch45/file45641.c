// fichero 45641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45641;

Registro45641 crear_registro45641(int id) {
    Registro45641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
