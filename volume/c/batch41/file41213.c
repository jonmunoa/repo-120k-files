// fichero 41213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41213;

Registro41213 crear_registro41213(int id) {
    Registro41213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
