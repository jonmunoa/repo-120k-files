// fichero 28769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28769;

Registro28769 crear_registro28769(int id) {
    Registro28769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
