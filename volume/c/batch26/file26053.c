// fichero 26053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26053;

Registro26053 crear_registro26053(int id) {
    Registro26053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
