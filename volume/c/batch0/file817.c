// fichero 817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro817;

Registro817 crear_registro817(int id) {
    Registro817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
