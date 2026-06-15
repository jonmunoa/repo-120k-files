// fichero 26153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26153;

Registro26153 crear_registro26153(int id) {
    Registro26153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
