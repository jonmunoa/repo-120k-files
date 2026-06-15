// fichero 34817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34817;

Registro34817 crear_registro34817(int id) {
    Registro34817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
