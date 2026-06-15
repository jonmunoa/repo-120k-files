// fichero 5149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5149;

Registro5149 crear_registro5149(int id) {
    Registro5149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
