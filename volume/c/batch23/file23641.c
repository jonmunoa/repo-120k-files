// fichero 23641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23641;

Registro23641 crear_registro23641(int id) {
    Registro23641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
