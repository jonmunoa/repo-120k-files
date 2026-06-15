// fichero 46841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46841;

Registro46841 crear_registro46841(int id) {
    Registro46841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
