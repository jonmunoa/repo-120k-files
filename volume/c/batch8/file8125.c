// fichero 8125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8125;

Registro8125 crear_registro8125(int id) {
    Registro8125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
