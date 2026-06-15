// fichero 30945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30945;

Registro30945 crear_registro30945(int id) {
    Registro30945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
