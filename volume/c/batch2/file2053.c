// fichero 2053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2053;

Registro2053 crear_registro2053(int id) {
    Registro2053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
