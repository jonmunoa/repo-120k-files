// fichero 26573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26573;

Registro26573 crear_registro26573(int id) {
    Registro26573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
