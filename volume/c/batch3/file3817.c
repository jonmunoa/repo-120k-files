// fichero 3817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3817;

Registro3817 crear_registro3817(int id) {
    Registro3817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
