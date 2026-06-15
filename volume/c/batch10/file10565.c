// fichero 10565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10565;

Registro10565 crear_registro10565(int id) {
    Registro10565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
