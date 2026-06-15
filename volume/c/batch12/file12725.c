// fichero 12725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12725;

Registro12725 crear_registro12725(int id) {
    Registro12725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
