// fichero 26169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26169;

Registro26169 crear_registro26169(int id) {
    Registro26169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
