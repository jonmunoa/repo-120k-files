// fichero 30729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30729;

Registro30729 crear_registro30729(int id) {
    Registro30729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
