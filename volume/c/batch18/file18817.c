// fichero 18817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18817;

Registro18817 crear_registro18817(int id) {
    Registro18817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
