// fichero 8769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8769;

Registro8769 crear_registro8769(int id) {
    Registro8769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
