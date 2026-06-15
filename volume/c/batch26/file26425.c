// fichero 26425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26425;

Registro26425 crear_registro26425(int id) {
    Registro26425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
