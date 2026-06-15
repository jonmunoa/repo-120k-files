// fichero 35761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35761;

Registro35761 crear_registro35761(int id) {
    Registro35761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
