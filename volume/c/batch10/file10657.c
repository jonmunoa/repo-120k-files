// fichero 10657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10657;

Registro10657 crear_registro10657(int id) {
    Registro10657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
