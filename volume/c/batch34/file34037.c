// fichero 34037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34037;

Registro34037 crear_registro34037(int id) {
    Registro34037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
