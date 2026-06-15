// fichero 44589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44589;

Registro44589 crear_registro44589(int id) {
    Registro44589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
