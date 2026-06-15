// fichero 30817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30817;

Registro30817 crear_registro30817(int id) {
    Registro30817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
