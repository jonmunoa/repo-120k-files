// fichero 28313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28313;

Registro28313 crear_registro28313(int id) {
    Registro28313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
