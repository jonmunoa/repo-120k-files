// fichero 10933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10933;

Registro10933 crear_registro10933(int id) {
    Registro10933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
