// fichero 42685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42685;

Registro42685 crear_registro42685(int id) {
    Registro42685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
