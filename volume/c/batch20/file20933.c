// fichero 20933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20933;

Registro20933 crear_registro20933(int id) {
    Registro20933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
