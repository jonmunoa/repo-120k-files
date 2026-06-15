// fichero 14053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14053;

Registro14053 crear_registro14053(int id) {
    Registro14053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
