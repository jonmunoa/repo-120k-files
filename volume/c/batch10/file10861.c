// fichero 10861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10861;

Registro10861 crear_registro10861(int id) {
    Registro10861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
