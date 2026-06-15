// fichero 26241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26241;

Registro26241 crear_registro26241(int id) {
    Registro26241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
