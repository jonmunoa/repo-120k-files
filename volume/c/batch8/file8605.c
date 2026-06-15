// fichero 8605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8605;

Registro8605 crear_registro8605(int id) {
    Registro8605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
