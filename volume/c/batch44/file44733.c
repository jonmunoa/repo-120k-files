// fichero 44733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44733;

Registro44733 crear_registro44733(int id) {
    Registro44733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
