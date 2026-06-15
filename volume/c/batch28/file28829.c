// fichero 28829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28829;

Registro28829 crear_registro28829(int id) {
    Registro28829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
